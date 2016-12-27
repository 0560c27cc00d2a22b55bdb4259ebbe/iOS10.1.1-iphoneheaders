/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying> {

	NSMutableArray* _failures;
	NSMutableArray* _successes;

}

@property (nonatomic,retain) NSMutableArray * successes;              //@synthesize successes=_successes - In the implementation block
@property (nonatomic,retain) NSMutableArray * failures;               //@synthesize failures=_failures - In the implementation block
+(Class)successesType;
+(Class)failuresType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)successes;
-(NSMutableArray *)failures;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(unsigned long long)failuresCount;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
@end
