//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString;

@interface VungleLineReader : NSObject
{
    NSString *_lineDelimiter;
    unsigned long long _chunkSize;
    NSString *_filePath;
    NSFileHandle *_fileHandle;
    unsigned long long _currentOffset;
    unsigned long long _totalFileLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
- (void)dealloc;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)initWithFilePath:(id)arg1;
@property(copy, nonatomic) NSString *lineDelimiter; // @synthesize lineDelimiter=_lineDelimiter;
- (id)readLine;
- (id)readTrimmedLine;
@property(nonatomic) unsigned long long totalFileLength; // @synthesize totalFileLength=_totalFileLength;

@end
