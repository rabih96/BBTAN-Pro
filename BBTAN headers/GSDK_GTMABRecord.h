//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSDK_GTMABRecord : NSObject
{
    void *record_;
}

+ (id)localizedPropertyName:(int)arg1;
+ (id)recordWithRecord:(void *)arg1;
+ (unsigned int)typeOfProperty:(int)arg1;
- (id)compositeName;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithRecord:(void *)arg1;
- (_Bool)isEqual:(id)arg1;
- (int)recordID;
- (void *)recordRef;
- (_Bool)removeValueForProperty:(int)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(int)arg2;
- (id)valueForProperty:(int)arg1;

@end

