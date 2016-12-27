/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSString;


@protocol SearchUIRowCardSection <SearchUICardSection>
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,copy,readonly) NSString * leftText; 
@property (nonatomic,copy,readonly) NSString * rightText; 
@property (nonatomic,readonly) BOOL imageIsRightAligned; 
@property (nonatomic,readonly) double imageCornerRadius; 
@optional
-(double)imageCornerRadius;
-(NSString *)leftText;
-(NSString *)rightText;
-(BOOL)imageIsRightAligned;

@required
-(UIImage *)image;

@end

