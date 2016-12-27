/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlaylistItemRepresentation.h>

@class AVPlaylistItemRepresentationInternal, AVURLAsset, NSDictionary, NSString;

@interface AVMutablePlaylistItemRepresentation : AVPlaylistItemRepresentation {

	AVPlaylistItemRepresentationInternal* _mutableIvars;

}

@property (nonatomic,copy) AVURLAsset * asset; 
@property (nonatomic,copy) NSDictionary * audibleDRMInfo; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSDictionary * gaplessInfo; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVURLAsset *)asset;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(NSDictionary *)gaplessInfo;
-(NSDictionary *)audibleDRMInfo;
-(id)initWithURLAsset:(id)arg1 ;
-(void)setAudibleDRMInfo:(NSDictionary *)arg1 ;
-(void)setGaplessInfo:(NSDictionary *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)finalize;
@end
