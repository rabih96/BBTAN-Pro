//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UIView<UITextInput><CCUITextInput>;

@interface UIEditBoxImplIOS_objc : NSObject <UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _editState;
    _Bool _returnPressed;
    int _dataInputMode;
    int _keyboardReturnType;
    UIView<UITextInput><CCUITextInput> *_textInput;
    void *_editBox;
    struct CGRect _frameRect;
}

+ (void)initialize;
- (void)animationSelector;
- (void)closeKeyboard;
- (void)createMultiLineTextField;
- (void)createSingleLineTextField;
@property(nonatomic) int dataInputMode; // @synthesize dataInputMode=_dataInputMode;
- (void)dealloc;
- (void)doAnimationWhenKeyboardMoveWithDuration:(float)arg1 distance:(float)arg2;
@property(nonatomic) void *editBox; // @synthesize editBox=_editBox;
@property(nonatomic) struct CGRect frameRect; // @synthesize frameRect=_frameRect;
- (id)getDefaultFontName;
- (int)getEndAction;
- (id)initWithFrame:(struct CGRect)arg1 editBox:(void *)arg2;
@property(readonly, nonatomic, getter=isEditState) _Bool editState; // @synthesize editState=_editState;
@property(nonatomic) int keyboardReturnType; // @synthesize keyboardReturnType=_keyboardReturnType;
- (void)openKeyboard;
@property(nonatomic) _Bool returnPressed; // @synthesize returnPressed=_returnPressed;
- (void)setFont:(id)arg1;
- (void)setInputFlag:(int)arg1;
- (void)setInputMode:(int)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceHolder:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;
- (void)setPlaceholderTextColor:(id)arg1;
- (void)setReturnType:(int)arg1;
@property(nonatomic) NSString *text;
- (void)setTextColor:(id)arg1;
- (void)setTextHorizontalAlignment:(int)arg1;
@property(retain, nonatomic) UIView<UITextInput><CCUITextInput> *textInput; // @synthesize textInput=_textInput;
- (void)setVisible:(_Bool)arg1;
- (void)textChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)updateFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
