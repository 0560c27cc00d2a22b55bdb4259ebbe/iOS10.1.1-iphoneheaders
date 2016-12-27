/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKPlacePhotosViewDelegate;
@class NSArray, NSMutableArray, UIScrollView, UILabel, UIActivityIndicatorView, UIVisualEffectView, UINavigationBar, UIView, UIImageView, NSLayoutConstraint, UINavigationItem, NSString;

@interface MKPlacePhotosView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	NSArray* _photos;
	NSMutableArray* _photoViews;
	UIScrollView* _scrollView;
	UILabel* _pageInfoLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSMutableArray* _singlePhotoArray;
	UIVisualEffectView* _topView;
	UINavigationBar* _navBar;
	UIView* _bottomView;
	UIVisualEffectView* _bottomEffectView;
	UIImageView* _gradientView;
	UILabel* _descriptionLabel;
	UILabel* _licenseLabel;
	UILabel* _authorLabel;
	NSLayoutConstraint* _statusBarHeightConstraint;
	NSLayoutConstraint* _navBarHeightConstraint;
	int _actualPage;
	UINavigationItem* _navItem;
	unsigned long long _textDisplayedForPage;
	NSArray* _fontConstraints;
	id<MKPlacePhotosViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long currentPage; 
@property (assign,nonatomic,__weak) id<MKPlacePhotosViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MKPlacePhotosViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<MKPlacePhotosViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)currentPage;
-(void)willEnterForeground:(id)arg1 ;
-(void)contentSizeDidChange;
-(void)toggleNavBar;
-(void)stopActivityIndicator;
-(id)initWithPhotos:(id)arg1 ;
-(void)updateStatusBarConstraint;
-(void)startActivityIndicator;
-(void)photoAttributionTapped;
-(void)showPhotoAt:(unsigned long long)arg1 ;
-(void)hideToView:(id)arg1 ;
-(void)setNavBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_backTapped;
-(id)headerTitleForPage:(unsigned long long)arg1 ;
-(void)updateDetails;
-(void)updateTextForPage:(unsigned long long)arg1 ;
-(void)memoryWarning:(id)arg1 ;
-(double)xPositionForPhotoAtIndex:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 pageWidth:(double)arg3 ;
-(unsigned long long)indexForPhotoAtXOffset:(double)arg1 pageWidth:(double)arg2 numberOfPhotos:(unsigned long long)arg3 ;
@end

