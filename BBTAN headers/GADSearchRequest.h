//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADRequest.h"

@class NSString, UIColor;

@interface GADSearchRequest : GADRequest
{
    NSString *_query;
    UIColor *_backgroundColor;
    UIColor *_gradientFrom;
    UIColor *_gradientTo;
    UIColor *_headerColor;
    UIColor *_descriptionTextColor;
    UIColor *_anchorTextColor;
    NSString *_fontFamily;
    unsigned long long _headerTextSize;
    UIColor *_borderColor;
    unsigned long long _borderType;
    unsigned long long _borderThickness;
    NSString *_customChannels;
    unsigned long long _callButtonColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *anchorTextColor; // @synthesize anchorTextColor=_anchorTextColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long borderThickness; // @synthesize borderThickness=_borderThickness;
@property(nonatomic) unsigned long long borderType; // @synthesize borderType=_borderType;
- (_Bool)cacheable;
@property(nonatomic) unsigned long long callButtonColor; // @synthesize callButtonColor=_callButtonColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *customChannels; // @synthesize customChannels=_customChannels;
@property(copy, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(copy, nonatomic) UIColor *gradientFrom; // @synthesize gradientFrom=_gradientFrom;
@property(copy, nonatomic) UIColor *gradientTo; // @synthesize gradientTo=_gradientTo;
@property(copy, nonatomic) UIColor *headerColor; // @synthesize headerColor=_headerColor;
@property(nonatomic) unsigned long long headerTextSize; // @synthesize headerTextSize=_headerTextSize;
- (id)initWithParameters:(id)arg1;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void)setBackgroundGradientFrom:(id)arg1 toColor:(id)arg2;
- (void)setBackgroundSolid:(id)arg1;
- (id)threadSafeParameters;

@end

