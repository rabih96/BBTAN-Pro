//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPBAdmobSettings, TAGPBUASettings;

@interface TAGPBSettings : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TAGPBAdmobSettings *admobSettings; // @dynamic admobSettings;
@property(nonatomic) _Bool hasAdmobSettings; // @dynamic hasAdmobSettings;
@property(nonatomic) _Bool hasUaSettings; // @dynamic hasUaSettings;
@property(retain, nonatomic) TAGPBUASettings *uaSettings; // @dynamic uaSettings;

@end

