/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKTLVRecord : NSObject {

	unsigned long long _tag;
	NSData* _value;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned long long tag;              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSData * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
+(id)recordFromData:(id)arg1 ;
+(id)parseFromDataSource:(id)arg1 ;
+(id)sequenceOfRecordsFromData:(id)arg1 ;
-(id)description;
-(NSData *)value;
-(NSData *)data;
-(unsigned long long)tag;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3 ;
@end

