/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, FCCKPIdentifier, NSString, FCCKPRecordIdentifier, FCCKPDateStatistics, FCCKPRecordType;

@interface FCCKPRecord : PBCodable <NSCopying> {

	NSMutableArray* _conflictLoserEtags;
	FCCKPIdentifier* _createdBy;
	NSString* _etag;
	NSMutableArray* _fields;
	FCCKPIdentifier* _modifiedBy;
	NSString* _modifiedByDevice;
	FCCKPRecordIdentifier* _recordIdentifier;
	FCCKPDateStatistics* _timeStatistics;
	FCCKPRecordType* _type;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                       //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) FCCKPRecordType * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedBy; 
@property (nonatomic,retain) FCCKPIdentifier * createdBy;                           //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) FCCKPDateStatistics * timeStatistics;                  //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,retain) NSMutableArray * fields;                               //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedBy; 
@property (nonatomic,retain) FCCKPIdentifier * modifiedBy;                          //@synthesize modifiedBy=_modifiedBy - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLoserEtags;                   //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedByDevice; 
@property (nonatomic,retain) NSString * modifiedByDevice;                           //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(FCCKPRecordType *)arg1 ;
-(FCCKPRecordType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(BOOL)hasType;
-(BOOL)hasEtag;
-(void)setEtag:(NSString *)arg1 ;
-(void)setRecordIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(FCCKPRecordIdentifier *)recordIdentifier;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)fields;
-(BOOL)hasTimeStatistics;
-(FCCKPDateStatistics *)timeStatistics;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(void)setCreatedBy:(FCCKPIdentifier *)arg1 ;
-(void)setTimeStatistics:(FCCKPDateStatistics *)arg1 ;
-(void)setModifiedBy:(FCCKPIdentifier *)arg1 ;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(void)addConflictLoserEtags:(id)arg1 ;
-(unsigned long long)conflictLoserEtagsCount;
-(void)clearConflictLoserEtags;
-(id)conflictLoserEtagsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCreatedBy;
-(BOOL)hasModifiedBy;
-(BOOL)hasModifiedByDevice;
-(FCCKPIdentifier *)createdBy;
-(FCCKPIdentifier *)modifiedBy;
-(NSString *)modifiedByDevice;
@end

