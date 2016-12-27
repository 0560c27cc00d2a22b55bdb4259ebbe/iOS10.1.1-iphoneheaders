/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUBufferedInputStream.h>

@protocol SFUBufferedInputStream <SFUInputStream>
@required
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2;
-(BOOL)seekWithinBufferToOffset:(long long)arg1;

@end


@protocol SFUInputStream;
@class NSString;

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {

	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long long mBufferSize;
	unsigned long long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)seekToOffset:(long long)arg1 ;
-(id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithStream:(id)arg1 dataLength:(long long)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithStream:(id)arg1 ;
@end

