/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying> {

	unsigned _switchIndex;
	unsigned long long _index;
	NSDate* _date;
	NRDeviceCollectionDiff* _diff;
	NRDeviceCollectionHistory* _historyManager;

}

@property (assign,nonatomic,__weak) NRDeviceCollectionHistory * historyManager;              //@synthesize historyManager=_historyManager - In the implementation block
@property (assign,nonatomic) unsigned long long index;                                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NRDeviceCollectionDiff * diff;                                  //@synthesize diff=_diff - In the implementation block
@property (assign,nonatomic) unsigned switchIndex;                                           //@synthesize switchIndex=_switchIndex - In the implementation block
@property (nonatomic,readonly) NRMutableDeviceCollection * state; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NRMutableDeviceCollection *)state;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(NRDeviceCollectionDiff *)diff;
-(id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned)arg5 ;
-(void)setDiff:(NRDeviceCollectionDiff *)arg1 ;
-(void)setSwitchIndex:(unsigned)arg1 ;
-(NRDeviceCollectionHistory *)historyManager;
-(void)setHistoryManager:(NRDeviceCollectionHistory *)arg1 ;
-(unsigned)switchIndex;
@end

