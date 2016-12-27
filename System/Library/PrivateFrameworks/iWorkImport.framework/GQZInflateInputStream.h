/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZEntryInputStream;
@class NSString;

@interface GQZInflateInputStream : NSObject <GQZEntryInputStream> {

	z_stream_s* mStream;
	id<GQZEntryInputStream> mInput;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned long long*)arg2 ;
-(id)initWithInput:(id)arg1 ;
@end

