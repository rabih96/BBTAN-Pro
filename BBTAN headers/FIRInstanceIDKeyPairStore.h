//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRInstanceIDBackupExcludedPlist, FIRInstanceIDKeyPair;

@interface FIRInstanceIDKeyPairStore : NSObject
{
    int _keychainEntitlementsErrorCount;
    FIRInstanceIDBackupExcludedPlist *_plist;
    FIRInstanceIDKeyPair *_keyPair;
}

+ (id)appIDKeyWithSubtype:(id)arg1;
+ (id)creationTimeKeyWithSubtype:(id)arg1;
+ (id)keyStoreFileName;
+ (id)privateTagWithSubtype:(id)arg1;
+ (id)publicTagWithSubtype:(id)arg1;
- (void).cxx_destruct;
- (id)appIdentityWithError:(id *)arg1;
- (id)cachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (_Bool)deleteSavedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)generateAndSaveKeyWithSubtype:(id)arg1 creationTime:(long long)arg2 error:(id *)arg3;
- (_Bool)hasCachedKeyPairs;
- (id)init;
@property(retain, nonatomic) FIRInstanceIDKeyPair *keyPair; // @synthesize keyPair=_keyPair;
@property(nonatomic) int keychainEntitlementsErrorCount; // @synthesize keychainEntitlementsErrorCount=_keychainEntitlementsErrorCount;
- (id)loadKeyPairWithError:(id *)arg1;
@property(retain, nonatomic) FIRInstanceIDBackupExcludedPlist *plist; // @synthesize plist=_plist;
- (_Bool)removeKeyPairCreationTimePlistWithError:(id *)arg1;
- (id)validCachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;

@end

