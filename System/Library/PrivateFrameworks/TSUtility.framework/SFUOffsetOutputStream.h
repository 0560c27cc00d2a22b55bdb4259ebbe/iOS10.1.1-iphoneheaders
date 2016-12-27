/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	long long mInitialOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)inputStream;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(id)initWithOutputStream:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)canCreateInputStream;
@end

