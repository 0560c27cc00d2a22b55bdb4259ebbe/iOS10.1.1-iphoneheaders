/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistorySync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _downloadRecordCount;
	unsigned _uploadRecordCount;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUploadRecordCount; 
@property (assign,nonatomic) unsigned uploadRecordCount;                //@synthesize uploadRecordCount=_uploadRecordCount - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadRecordCount; 
@property (assign,nonatomic) unsigned downloadRecordCount;              //@synthesize downloadRecordCount=_downloadRecordCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUploadRecordCount:(unsigned)arg1 ;
-(void)setHasUploadRecordCount:(BOOL)arg1 ;
-(BOOL)hasUploadRecordCount;
-(void)setDownloadRecordCount:(unsigned)arg1 ;
-(void)setHasDownloadRecordCount:(BOOL)arg1 ;
-(BOOL)hasDownloadRecordCount;
-(unsigned)uploadRecordCount;
-(unsigned)downloadRecordCount;
@end

