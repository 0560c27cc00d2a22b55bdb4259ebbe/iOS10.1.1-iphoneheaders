/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/VibrantTableViewCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, NSString;

@interface ReadingListTableViewCell : VibrantTableViewCell {

	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILabel* _detailTextOverlayLabel;
	UILabel* _siteNameLabel;
	UIImageView* _imageView;
	NSLayoutConstraint* _textLabelBaselineToTopConstraint;
	NSLayoutConstraint* _siteNameTextLabelBaselineToTextLabelBaselineConstraint;
	NSLayoutConstraint* _detailTextLabelBaselineToSiteNameTextLabelBaselineConstraint;
	NSLayoutConstraint* _detailTextLabelBaselineToBottomConstraint;
	NSLayoutConstraint* _detailTextOverlayLabelBaselineToTopConstraint;
	NSLayoutConstraint* _detailTextOverlayLabelLeadingConstraint;
	NSLayoutConstraint* _detailTextOverlayLabelTrailingConstraint;
	BOOL _hasImage;
	int _bookmarkID;
	NSString* _siteName;
	NSString* _previewText;
	NSString* _fetchingStatusText;

}

@property (assign,nonatomic) BOOL hasImage;                            //@synthesize hasImage=_hasImage - In the implementation block
@property (nonatomic,copy) NSString * fetchingStatusText;              //@synthesize fetchingStatusText=_fetchingStatusText - In the implementation block
@property (nonatomic,readonly) int bookmarkID;                         //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,copy) NSString * siteName;                        //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,copy) NSString * previewText;                     //@synthesize previewText=_previewText - In the implementation block
+(double)cellHeight;
-(void)setUsesVibrantEffect:(BOOL)arg1 ;
-(id)_titleLabelFont;
-(id)_detailLabelFont;
-(id)_siteNameFont;
-(void)_initializeAutoLayoutConstraints;
-(void)_setFetchingStatusTextForBookmark:(id)arg1 ;
-(void)setFetchingStatusText:(NSString *)arg1 ;
-(NSString *)fetchingStatusText;
-(void)displayThumbnailIconForBookmark:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)setBookmark:(id)arg1 isArchiving:(BOOL)arg2 ;
-(void)setHasImage:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)hasImage;
-(int)bookmarkID;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)previewText;
-(void)setPreviewText:(NSString *)arg1 ;
-(void)setBookmark:(id)arg1 ;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
@end

