//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, TAGExpandedFunctionCall;

@interface TAGMacroInfo : NSObject
{
    NSMutableSet *_rules;
    NSMutableDictionary *_addMacros;
    NSMutableDictionary *_removeMacros;
    TAGExpandedFunctionCall *_defaultFunctionCall;
}

- (void).cxx_destruct;
- (void)addAddMacro:(id)arg1 forRule:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *addMacros; // @synthesize addMacros=_addMacros;
- (void)addRemoveMacro:(id)arg1 forRule:(id)arg2;
@property(retain, nonatomic) TAGExpandedFunctionCall *defaultFunctionCall; // @synthesize defaultFunctionCall=_defaultFunctionCall;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *removeMacros; // @synthesize removeMacros=_removeMacros;
@property(retain, nonatomic) NSMutableSet *rules; // @synthesize rules=_rules;

@end

