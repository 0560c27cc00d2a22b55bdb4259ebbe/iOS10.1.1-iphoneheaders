/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VKPTextureAtlas : PBCodable <NSCopying> {

	unsigned _quadHeight;
	unsigned _quadWidth;
	NSData* _texture;

}

@property (nonatomic,retain) NSData * texture;                 //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) unsigned quadWidth;               //@synthesize quadWidth=_quadWidth - In the implementation block
@property (assign,nonatomic) unsigned quadHeight;              //@synthesize quadHeight=_quadHeight - In the implementation block
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
-(NSData *)texture;
-(unsigned)quadWidth;
-(unsigned)quadHeight;
-(void)setQuadWidth:(unsigned)arg1 ;
-(void)setQuadHeight:(unsigned)arg1 ;
-(void)setTexture:(NSData *)arg1 ;
@end

