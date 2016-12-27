/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {

	NSMutableArray* _listResultItems;
	int _listType;
	NSString* _searchString;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType;                                  //@synthesize listType=_listType - In the implementation block
@property (nonatomic,retain) NSMutableArray * listResultItems;              //@synthesize listResultItems=_listResultItems - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
+(Class)listResultItemType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSearchString;
-(int)listType;
-(void)setListType:(int)arg1 ;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(void)clearListResultItems;
-(void)addListResultItem:(id)arg1 ;
-(unsigned long long)listResultItemsCount;
-(id)listResultItemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)listResultItems;
-(void)setListResultItems:(NSMutableArray *)arg1 ;
@end

