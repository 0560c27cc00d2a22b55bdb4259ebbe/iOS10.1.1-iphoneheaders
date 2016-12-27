/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<WebCore::SharedBuffer::DataBuffer>* sharedBufferDataBuffer;

}
+(void)initialize;
-(id)initWithSharedBufferDataBuffer:(DataBuffer*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
@end

