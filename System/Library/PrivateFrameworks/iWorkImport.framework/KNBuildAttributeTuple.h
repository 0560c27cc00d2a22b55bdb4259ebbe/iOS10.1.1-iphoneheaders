/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, KNBuildAttributeValue, KNBuildChunkIdentifier, NSUUID, KNBuild, KNBuildChunk;

@interface KNBuildAttributeTuple : TSPObject <NSCopying> {

	NSString* _property;
	KNBuildAttributeValue* _attributeValue;
	KNBuildChunkIdentifier* _buildChunkIdentifier;
	NSUUID* _buildId;
	BOOL _definedAttributeValue;
	BOOL _definedBuildChunkIdentifier;
	BOOL _definedBuildId;

}

@property (nonatomic,readonly) KNBuild * build; 
@property (nonatomic,readonly) KNBuildChunk * chunk; 
@property (nonatomic,readonly) BOOL isBuildTuple; 
@property (nonatomic,readonly) BOOL isChunkTuple; 
@property (nonatomic,readonly) NSString * property;                        //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) KNBuildAttributeValue * value;              //@synthesize attributeValue=_attributeValue - In the implementation block
+(id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3 ;
+(id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3 ;
+(id)tupleWithChunk:(id)arg1 referent:(unsigned long long)arg2 ;
-(id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3 ;
-(id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3 ;
-(id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4 ;
-(BOOL)isChunkTuple;
-(BOOL)isBuildTuple;
-(BOOL)isValidForSlide:(id)arg1 ;
-(id)description;
-(KNBuildAttributeValue *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(KNBuild *)build;
-(KNBuildChunk *)chunk;
-(NSString *)property;
@end

