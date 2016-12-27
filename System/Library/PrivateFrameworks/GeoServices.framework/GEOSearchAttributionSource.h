/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {

	SCD_Struct_GE1* _attributionRequirements;
	NSMutableArray* _attributionApps;
	NSMutableArray* _localizedAttributions;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;
	NSMutableArray* _supportedComponentActions;
	NSString* _webBaseActionURL;

}

@property (nonatomic,retain) NSString * sourceIdentifier;                                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned sourceVersion;                                         //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedAttributions;                         //@synthesize localizedAttributions=_localizedAttributions - In the implementation block
@property (nonatomic,readonly) unsigned long long attributionRequirementsCount; 
@property (nonatomic,readonly) int* attributionRequirements; 
@property (nonatomic,retain) NSMutableArray * attributionApps;                               //@synthesize attributionApps=_attributionApps - In the implementation block
@property (nonatomic,readonly) BOOL hasWebBaseActionURL; 
@property (nonatomic,retain) NSString * webBaseActionURL;                                    //@synthesize webBaseActionURL=_webBaseActionURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedComponentActions;                     //@synthesize supportedComponentActions=_supportedComponentActions - In the implementation block
+(Class)localizedAttributionType;
+(Class)attributionAppsType;
+(Class)supportedComponentActionsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)clearLocalizedAttributions;
-(void)addLocalizedAttribution:(id)arg1 ;
-(unsigned long long)localizedAttributionsCount;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionRequirementsCount;
-(int*)attributionRequirements;
-(void)clearAttributionRequirements;
-(void)addAttributionRequirements:(int)arg1 ;
-(int)attributionRequirementsAtIndex:(unsigned long long)arg1 ;
-(void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributionRequirementsAsString:(int)arg1 ;
-(int)StringAsAttributionRequirements:(id)arg1 ;
-(void)clearAttributionApps;
-(void)addAttributionApps:(id)arg1 ;
-(unsigned long long)attributionAppsCount;
-(id)attributionAppsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasWebBaseActionURL;
-(void)clearSupportedComponentActions;
-(void)addSupportedComponentActions:(id)arg1 ;
-(unsigned long long)supportedComponentActionsCount;
-(id)supportedComponentActionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributionApps;
-(void)setAttributionApps:(NSMutableArray *)arg1 ;
-(NSString *)webBaseActionURL;
-(void)setWebBaseActionURL:(NSString *)arg1 ;
-(NSMutableArray *)supportedComponentActions;
-(void)setSupportedComponentActions:(NSMutableArray *)arg1 ;
-(id)bestLocalizedAttribution;
-(BOOL)supportsAction:(int)arg1 forComponent:(int)arg2 ;
-(BOOL)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2 ;
@end

