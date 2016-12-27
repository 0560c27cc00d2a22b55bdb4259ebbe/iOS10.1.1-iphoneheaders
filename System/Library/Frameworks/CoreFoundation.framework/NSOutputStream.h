/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream

@property (readonly) BOOL hasSpaceAvailable; 
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
+(id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamToMemory;
+(id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2 ;
-(SCD_Struct_NS19)_cfStreamError;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

