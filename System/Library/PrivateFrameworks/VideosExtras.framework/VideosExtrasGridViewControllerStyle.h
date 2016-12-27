/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosExtras/VideosExtras-Structs.h>
@class UIColor, NSString, NSDictionary, VideosExtrasGridHeaderStyle, VideosExtrasGridSectionHeaderStyle, VideosExtrasGridCellStyle;

@interface VideosExtrasGridViewControllerStyle : NSObject {

	BOOL _showsScrollFade;
	BOOL _adjustsContentInsetByBottomNavBar;
	UIColor* _backgroundColor;
	NSString* _detailTextStyle;
	NSDictionary* _detailDefaultFontAttributes;
	UIColor* _detailTextColor;
	VideosExtrasGridHeaderStyle* _headerStyle;
	VideosExtrasGridSectionHeaderStyle* _sectionHeaderStyle;
	VideosExtrasGridCellStyle* _defaultCellStyle;
	VideosExtrasGridCellStyle* _imageCellStyle;
	VideosExtrasGridCellStyle* _videoCellStyle;
	VideosExtrasGridCellStyle* _productCellStyle;
	double _defaultSpacing;
	double _imageSpacing;
	double _videoSpacing;
	double _productSpacing;
	double _cellLineSpacing;
	UIEdgeInsets _collectionViewInsets;
	UIEdgeInsets _detailInsets;
	UIEdgeInsets _defaultCellSectionInsets;
	UIEdgeInsets _imageCellSectionInsets;
	UIEdgeInsets _videoCellSectionInsets;
	UIEdgeInsets _productCellSectionInsets;

}

@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionViewInsets;                                    //@synthesize collectionViewInsets=_collectionViewInsets - In the implementation block
@property (nonatomic,retain) NSString * detailTextStyle;                                           //@synthesize detailTextStyle=_detailTextStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * detailDefaultFontAttributes;                           //@synthesize detailDefaultFontAttributes=_detailDefaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * detailTextColor;                                            //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets detailInsets;                                            //@synthesize detailInsets=_detailInsets - In the implementation block
@property (nonatomic,retain) VideosExtrasGridHeaderStyle * headerStyle;                            //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,retain) VideosExtrasGridSectionHeaderStyle * sectionHeaderStyle;              //@synthesize sectionHeaderStyle=_sectionHeaderStyle - In the implementation block
@property (nonatomic,retain) VideosExtrasGridCellStyle * defaultCellStyle;                         //@synthesize defaultCellStyle=_defaultCellStyle - In the implementation block
@property (nonatomic,retain) VideosExtrasGridCellStyle * imageCellStyle;                           //@synthesize imageCellStyle=_imageCellStyle - In the implementation block
@property (nonatomic,retain) VideosExtrasGridCellStyle * videoCellStyle;                           //@synthesize videoCellStyle=_videoCellStyle - In the implementation block
@property (nonatomic,retain) VideosExtrasGridCellStyle * productCellStyle;                         //@synthesize productCellStyle=_productCellStyle - In the implementation block
@property (assign,nonatomic) double defaultSpacing;                                                //@synthesize defaultSpacing=_defaultSpacing - In the implementation block
@property (assign,nonatomic) double imageSpacing;                                                  //@synthesize imageSpacing=_imageSpacing - In the implementation block
@property (assign,nonatomic) double videoSpacing;                                                  //@synthesize videoSpacing=_videoSpacing - In the implementation block
@property (assign,nonatomic) double productSpacing;                                                //@synthesize productSpacing=_productSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets defaultCellSectionInsets;                                //@synthesize defaultCellSectionInsets=_defaultCellSectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageCellSectionInsets;                                  //@synthesize imageCellSectionInsets=_imageCellSectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets videoCellSectionInsets;                                  //@synthesize videoCellSectionInsets=_videoCellSectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets productCellSectionInsets;                                //@synthesize productCellSectionInsets=_productCellSectionInsets - In the implementation block
@property (assign,nonatomic) double cellLineSpacing;                                               //@synthesize cellLineSpacing=_cellLineSpacing - In the implementation block
@property (assign,nonatomic) BOOL showsScrollFade;                                                 //@synthesize showsScrollFade=_showsScrollFade - In the implementation block
@property (assign,nonatomic) BOOL adjustsContentInsetByBottomNavBar;                               //@synthesize adjustsContentInsetByBottomNavBar=_adjustsContentInsetByBottomNavBar - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIEdgeInsets)collectionViewInsets;
-(void)setCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(VideosExtrasGridSectionHeaderStyle *)sectionHeaderStyle;
-(VideosExtrasGridHeaderStyle *)headerStyle;
-(void)setHeaderStyle:(VideosExtrasGridHeaderStyle *)arg1 ;
-(UIColor *)detailTextColor;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(NSString *)detailTextStyle;
-(void)setDetailTextStyle:(NSString *)arg1 ;
-(NSDictionary *)detailDefaultFontAttributes;
-(void)setDetailDefaultFontAttributes:(NSDictionary *)arg1 ;
-(UIEdgeInsets)detailInsets;
-(void)setDetailInsets:(UIEdgeInsets)arg1 ;
-(void)setSectionHeaderStyle:(VideosExtrasGridSectionHeaderStyle *)arg1 ;
-(VideosExtrasGridCellStyle *)defaultCellStyle;
-(void)setDefaultCellStyle:(VideosExtrasGridCellStyle *)arg1 ;
-(VideosExtrasGridCellStyle *)imageCellStyle;
-(void)setImageCellStyle:(VideosExtrasGridCellStyle *)arg1 ;
-(VideosExtrasGridCellStyle *)videoCellStyle;
-(void)setVideoCellStyle:(VideosExtrasGridCellStyle *)arg1 ;
-(VideosExtrasGridCellStyle *)productCellStyle;
-(void)setProductCellStyle:(VideosExtrasGridCellStyle *)arg1 ;
-(double)defaultSpacing;
-(void)setDefaultSpacing:(double)arg1 ;
-(double)imageSpacing;
-(void)setImageSpacing:(double)arg1 ;
-(double)videoSpacing;
-(void)setVideoSpacing:(double)arg1 ;
-(double)productSpacing;
-(void)setProductSpacing:(double)arg1 ;
-(UIEdgeInsets)defaultCellSectionInsets;
-(void)setDefaultCellSectionInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageCellSectionInsets;
-(void)setImageCellSectionInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)videoCellSectionInsets;
-(void)setVideoCellSectionInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)productCellSectionInsets;
-(void)setProductCellSectionInsets:(UIEdgeInsets)arg1 ;
-(double)cellLineSpacing;
-(void)setCellLineSpacing:(double)arg1 ;
-(BOOL)showsScrollFade;
-(void)setShowsScrollFade:(BOOL)arg1 ;
-(BOOL)adjustsContentInsetByBottomNavBar;
-(void)setAdjustsContentInsetByBottomNavBar:(BOOL)arg1 ;
@end

