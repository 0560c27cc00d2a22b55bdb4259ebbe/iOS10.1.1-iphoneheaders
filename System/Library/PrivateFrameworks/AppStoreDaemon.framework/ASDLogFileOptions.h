/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying> {

	NSString* _directoryPath;
	NSString* _fileName;
	long long _maxNumberOfLogFiles;
	unsigned long long _maxSizeInBytes;

}

@property (nonatomic,copy) NSString * logDirectoryPath;                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * logFileBaseName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogFileSize;              //@synthesize maxSizeInBytes=_maxSizeInBytes - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLogFiles;                  //@synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles - In the implementation block
-(NSString *)logDirectoryPath;
-(void)setLogDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileBaseName;
-(void)setLogFileBaseName:(NSString *)arg1 ;
-(unsigned long long)maxLogFileSize;
-(void)setMaxLogFileSize:(unsigned long long)arg1 ;
-(long long)maxNumberOfLogFiles;
-(void)setMaxNumberOfLogFiles:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

