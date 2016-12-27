/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage {

	unsigned long long _offset;
	unsigned _fragmentedMessageID;
	unsigned _fragmentIndex;
	unsigned _totalFragmentCount;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned fragmentedMessageID;              //@synthesize fragmentedMessageID=_fragmentedMessageID - In the implementation block
@property (nonatomic,readonly) unsigned fragmentIndex;                    //@synthesize fragmentIndex=_fragmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned totalFragmentCount;               //@synthesize totalFragmentCount=_totalFragmentCount - In the implementation block
@property (nonatomic,retain,readonly) NSData * data; 
+(id)createOriginalMessageFromFragmentedMessages:(id)arg1 ;
+(id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentSize:(unsigned)arg3 ;
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned)totalFragmentCount;
-(id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentIndex:(unsigned)arg3 totalFragmentCount:(unsigned)arg4 ;
-(unsigned)fragmentedMessageID;
-(unsigned)fragmentIndex;
-(unsigned char)command;
@end

