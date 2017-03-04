//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBArray.h"

@interface TAGPBMutableArray : TAGPBArray
{
    unsigned long long _mutationCount;
    id <TAGPBMutableArrayDelegate> _delegate;
}

+ (id)arrayWithValueType:(int)arg1 capacity:(unsigned long long)arg2;
- (void)addBool:(_Bool)arg1;
- (void)addDouble:(double)arg1;
- (void)addFloat:(float)arg1;
- (void)addInt32:(int)arg1;
- (void)addInt64:(long long)arg1;
- (void)addObject:(id)arg1;
- (void)addUInt32:(unsigned int)arg1;
- (void)addUInt64:(unsigned long long)arg1;
- (void)appendArray:(id)arg1;
- (void)appendValues:(const void *)arg1 valueType:(int)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
@property(nonatomic) id <TAGPBMutableArrayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ensureAdditionalCapacity:(unsigned long long)arg1;
- (void)enumerateInt32sUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithValueType:(int)arg1 capacity:(unsigned long long)arg2;
- (void)removeAllValues;
- (void)replaceBoolAtIndex:(unsigned long long)arg1 withBool:(_Bool)arg2;
- (void)replaceDoubleAtIndex:(unsigned long long)arg1 withDouble:(double)arg2;
- (void)replaceFloatAtIndex:(unsigned long long)arg1 withFloat:(float)arg2;
- (void)replaceInt32AtIndex:(unsigned long long)arg1 withInt32:(int)arg2;
- (void)replaceInt64AtIndex:(unsigned long long)arg1 withInt64:(long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceUInt32AtIndex:(unsigned long long)arg1 withUInt32:(unsigned int)arg2;
- (void)replaceUInt64AtIndex:(unsigned long long)arg1 withUInt64:(unsigned long long)arg2;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end

