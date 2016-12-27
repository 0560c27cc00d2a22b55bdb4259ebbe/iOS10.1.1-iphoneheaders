/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNChunkableBuildAnimator.h>

@class NSString;

@interface KNBuildAppear : KNAnimationEffect <KNChunkableBuildAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(long long)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2 ;
+(id)thumbnailImageNameForType:(long long)arg1 ;
+(id)animationName;
+(id)defaultAttributes;
-(id)animationsWithContext:(id)arg1 ;
@end

