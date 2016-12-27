/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@class NSURL, TSUFileIOChannel, NSString;

@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSURL* _URL;
	/*^block*/id _handler;
	TSUFileIOChannel* _writeChannel;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)close;
-(void)writeData:(id)arg1 ;
@end

