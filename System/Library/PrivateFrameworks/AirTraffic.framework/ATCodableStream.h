/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class MSVStreamReader, MSVStreamWriter, NSObject, NSInputStream, NSFileHandle;

@interface ATCodableStream : NSObject <NSSecureCoding> {

	MSVStreamReader* _reader;
	MSVStreamWriter* _writer;
	NSObject*<OS_dispatch_queue> _queue;
	NSInputStream* _inputStream;
	NSFileHandle* _fileHandleForReading;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                      //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandleForReading;              //@synthesize fileHandleForReading=_fileHandleForReading - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSFileHandle *)fileHandleForReading;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSInputStream *)inputStream;
-(id)initWithInputStream:(id)arg1 ;
@end

