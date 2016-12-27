/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBFeedConfiguration : PBCodable <NSCopying> {

	NSString* _freeAFeedID;
	NSString* _freeBFeedID;
	NSString* _freeCFeedID;
	NSString* _paidAFeedID;
	NSString* _paidBFeedID;
	NSString* _paidCFeedID;

}

@property (nonatomic,readonly) BOOL hasFreeAFeedID; 
@property (nonatomic,retain) NSString * freeAFeedID;              //@synthesize freeAFeedID=_freeAFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasFreeBFeedID; 
@property (nonatomic,retain) NSString * freeBFeedID;              //@synthesize freeBFeedID=_freeBFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasFreeCFeedID; 
@property (nonatomic,retain) NSString * freeCFeedID;              //@synthesize freeCFeedID=_freeCFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidAFeedID; 
@property (nonatomic,retain) NSString * paidAFeedID;              //@synthesize paidAFeedID=_paidAFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidBFeedID; 
@property (nonatomic,retain) NSString * paidBFeedID;              //@synthesize paidBFeedID=_paidBFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidCFeedID; 
@property (nonatomic,retain) NSString * paidCFeedID;              //@synthesize paidCFeedID=_paidCFeedID - In the implementation block
+(id)feedConfigurationFromJSON:(id)arg1 ;
+(id)feedConfigurationFromDict:(id)arg1 ;
-(id)feedIDForBin:(long long)arg1 paid:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFreeAFeedID:(NSString *)arg1 ;
-(void)setFreeBFeedID:(NSString *)arg1 ;
-(void)setFreeCFeedID:(NSString *)arg1 ;
-(void)setPaidAFeedID:(NSString *)arg1 ;
-(void)setPaidBFeedID:(NSString *)arg1 ;
-(void)setPaidCFeedID:(NSString *)arg1 ;
-(NSString *)paidAFeedID;
-(NSString *)freeAFeedID;
-(NSString *)paidBFeedID;
-(NSString *)freeBFeedID;
-(NSString *)paidCFeedID;
-(NSString *)freeCFeedID;
-(BOOL)hasFreeAFeedID;
-(BOOL)hasFreeBFeedID;
-(BOOL)hasFreeCFeedID;
-(BOOL)hasPaidAFeedID;
-(BOOL)hasPaidBFeedID;
-(BOOL)hasPaidCFeedID;
@end

