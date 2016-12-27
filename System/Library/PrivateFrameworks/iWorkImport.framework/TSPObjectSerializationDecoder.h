/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDecoder.h>

@protocol OS_dispatch_data;
@class NSObject, NSMutableDictionary, NSString;

@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder> {

	NSObject*<OS_dispatch_data> _encodedData;
	unsigned long long _encodedDataLength;
	NSMutableDictionary* _directory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newReadChannelForLocator:(id)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)init;
-(id)initWithEncodedData:(id)arg1 ;
@end

