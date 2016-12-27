/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecord;

@interface CKDPRecordRetrieveAncestorsResponse : PBCodable <NSCopying> {

	NSMutableArray* _ancestors;
	CKDPRecord* _shareRecord;

}

@property (nonatomic,retain) NSMutableArray * ancestors;              //@synthesize ancestors=_ancestors - In the implementation block
@property (nonatomic,readonly) BOOL hasShareRecord; 
@property (nonatomic,retain) CKDPRecord * shareRecord;                //@synthesize shareRecord=_shareRecord - In the implementation block
+(Class)ancestorType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setShareRecord:(CKDPRecord *)arg1 ;
-(BOOL)hasShareRecord;
-(CKDPRecord *)shareRecord;
-(void)addAncestor:(id)arg1 ;
-(unsigned long long)ancestorsCount;
-(void)clearAncestors;
-(id)ancestorAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ancestors;
-(void)setAncestors:(NSMutableArray *)arg1 ;
@end

