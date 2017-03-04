#import <UIKit/UIKit.h>

@interface SBUIController : NSObject
+(id) sharedInstance;
-(void)activateApplication:(id)arg1;
@end

@interface SBApplicationController : NSObject
+(id) sharedInstance;
-(id) applicationWithBundleIdentifier:(NSString*)identifier;
-(id) applicationWithDisplayIdentifier:(NSString*)identifier;
-(BOOL) isRunning;
@end

@interface CCEAGLView : UIView <UIAlertViewDelegate>
-(void)layoutSubviews;
-(void)relaunchApp;
-(void)quitApp;
-(void)launchSettings;
@end

#define kReslaunchBBTAN  "com.rabih96.BBTANPRO.relaunch"
#define kBBTANIdentifier "com.crater.bbtan"
#define kQuitButton		 @"quitButton"
#define kQuickExit		 @"quickExit"

static UIButton *relaunch;
static UIButton *quit;
static UIButton *settings;
static UISwitch *quitButtonSwitch;
static UISwitch *quickExitSwitch;
static double 	kRelaunchDelay = 1.25;

static void dispatchAfter(CGFloat delay, void (^block)(void)) {
	dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^(void) {
		block();
	});
}

static inline void relaunchBBTAN(){
	dispatchAfter(kRelaunchDelay , ^{
		SBApplicationController *bbtanApp = [[%c(SBApplicationController) sharedInstance] applicationWithBundleIdentifier:@kBBTANIdentifier];
		[[%c(SBUIController) sharedInstance] activateApplication:bbtanApp];
	});
}

//remove Ads banner
%hook GADBannerView

- (id)initWithFrame:(struct CGRect)arg1 adSize:(struct CGSize)arg2{
	return nil;
}

%end

//Add custom buttons
%hook CCEAGLView

- (void)layoutSubviews{
	%orig;

	if (relaunch == nil && quit == nil && settings == nil) {
		relaunch = [UIButton buttonWithType:UIButtonTypeCustom];
		[relaunch addTarget:self action:@selector(relaunchApp) forControlEvents:UIControlEventTouchUpInside];
		[relaunch setTitle:@"Restart" forState:UIControlStateNormal];
		relaunch.frame = CGRectMake( self.frame.size.width - 100, 0.0, 100.0, 50.0);
		relaunch.alpha = 0.0;
		relaunch.titleLabel.font = [UIFont fontWithName:@"Helvetica-Bold" size:20.0];
		[self addSubview:relaunch];

		quit = [UIButton buttonWithType:UIButtonTypeCustom];
		[quit addTarget:self action:@selector(quitApp) forControlEvents:UIControlEventTouchUpInside];
		[quit setTitle:@"Quit" forState:UIControlStateNormal];
		quit.frame = CGRectMake( 0.0, 0.0, 100.0, 50.0);
		quit.alpha = 0.0;
		quit.titleLabel.font = [UIFont fontWithName:@"Helvetica-Bold" size:20.0];
		[self addSubview:quit];

		if ([[NSUserDefaults standardUserDefaults] objectForKey:kQuitButton] && [[NSUserDefaults standardUserDefaults] objectForKey:kQuitButton]) {
			quit.enabled = [[NSUserDefaults standardUserDefaults] boolForKey:kQuitButton];
			quit.hidden = ![[NSUserDefaults standardUserDefaults] boolForKey:kQuitButton];
		}

		settings = [UIButton buttonWithType:UIButtonTypeCustom];
		[settings addTarget:self action:@selector(launchSettings) forControlEvents:UIControlEventTouchUpInside];
		settings.frame = CGRectMake( self.frame.size.width - 37.5,  self.frame.size.height - 37.5, 25.0, 25.0);
		settings.alpha = 0.0;
		[settings setImage:[UIImage imageWithContentsOfFile:@"/Library/Application Support/BBTANPro/settings.png"] forState:UIControlStateNormal];
		[self addSubview:settings];
	}

	[UIView animateWithDuration:0.5
		delay:5 
		options:UIViewAnimationCurveEaseInOut 
		animations:^{
			relaunch.alpha = 1.0;
			settings.alpha = 1.0;
			quit.alpha = 1.0;
		}
		completion:NULL
	];

}

//relaunch application
%new
- (void)relaunchApp {
	if ([[NSUserDefaults standardUserDefaults] objectForKey:kQuickExit] && [[NSUserDefaults standardUserDefaults] boolForKey:kQuickExit]){
		kRelaunchDelay = 0.5;
	}else{
		kRelaunchDelay = 1.25;
	}
	CFNotificationCenterPostNotification(CFNotificationCenterGetDarwinNotifyCenter(), CFSTR(kReslaunchBBTAN), NULL, NULL, YES);
	[self quitApp];
}

//quit application
%new
- (void)quitApp {
	if ([[NSUserDefaults standardUserDefaults] objectForKey:kQuickExit] && ![[NSUserDefaults standardUserDefaults] boolForKey:kQuickExit]) {
		[[UIApplication sharedApplication] performSelector:@selector(suspend)];
		[NSThread sleepForTimeInterval:kRelaunchDelay/2.0];
	}

	exit(0);
}

%new
- (void)launchSettings {
	UIView *settingsView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 270, 100)];

	quitButtonSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(175, 10, 0, 0)];
	[quitButtonSwitch addTarget:self action:@selector(changeSwitch) forControlEvents:UIControlEventValueChanged];
	[settingsView addSubview:quitButtonSwitch];

	quickExitSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(175, 60, 0, 0)];
	[quickExitSwitch addTarget:self action:@selector(changeSwitch) forControlEvents:UIControlEventValueChanged];
	[settingsView addSubview:quickExitSwitch];

	UILabel *quitLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 150, 50)];
	quitLabel.textAlignment = NSTextAlignmentRight;
	quitLabel.text = @"Quit Button :";
	[settingsView addSubview:quitLabel];

	UILabel *quickLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 50, 150, 50)];
	quickLabel.textAlignment = NSTextAlignmentRight;
	quickLabel.text = @"Quick Exit :";
	[settingsView addSubview:quickLabel];

	if ([[NSUserDefaults standardUserDefaults] objectForKey:kQuitButton]) {
		[quitButtonSwitch setOn:[[NSUserDefaults standardUserDefaults] boolForKey:kQuitButton] animated:NO];
	} else {
		[quitButtonSwitch setOn:NO animated:NO];
	}

	if ([[NSUserDefaults standardUserDefaults] objectForKey:kQuickExit]) {
		[quickExitSwitch setOn:[[NSUserDefaults standardUserDefaults] boolForKey:kQuickExit] animated:NO];
	} else {
		[quickExitSwitch setOn:NO animated:NO];
	}

	//I know UIAlertView is deprecated but UIAlertController crashed in all possible workarounds (at least from what i know)//
	UIAlertView *settingsAlertView = [[UIAlertView alloc] initWithTitle:@"BBTAN Pro Settings" message:nil delegate:self cancelButtonTitle:@"Done" otherButtonTitles:nil, nil];
	[settingsAlertView setValue:settingsView forKey:@"accessoryView"];
	[settingsAlertView show];

}

%new
- (void)changeSwitch{
	[[NSUserDefaults standardUserDefaults] setBool:quitButtonSwitch.isOn forKey:kQuitButton];
	[[NSUserDefaults standardUserDefaults] setBool:quickExitSwitch.isOn forKey:kQuickExit];
	[[NSUserDefaults standardUserDefaults] synchronize];
}

%new
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
	if (buttonIndex == [alertView cancelButtonIndex]){
		if ([[NSUserDefaults standardUserDefaults] objectForKey:kQuitButton] && [[NSUserDefaults standardUserDefaults] objectForKey:kQuitButton]) {
			quit.enabled = [[NSUserDefaults standardUserDefaults] boolForKey:kQuitButton];
			quit.hidden = ![[NSUserDefaults standardUserDefaults] boolForKey:kQuitButton];
		}
	}
}

%end

//Add relaunch application listener 
%hook SpringBoard

- (void)applicationDidFinishLaunching:(UIApplication *)application {
	%orig;
	CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, (CFNotificationCallback)relaunchBBTAN, CFSTR(kReslaunchBBTAN), NULL, 0);
}

%end

