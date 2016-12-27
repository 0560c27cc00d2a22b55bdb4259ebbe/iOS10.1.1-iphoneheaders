/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIScrollView;


@protocol _UIDocumentPickerContainedViewController <NSObject,UISearchControllerDelegate>
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) long long displayMode; 
@property (nonatomic,readonly) BOOL supportsActions; 
@required
-(NSArray *)indexPathsForSelectedItems;
-(UIScrollView *)scrollView;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1;
-(BOOL)supportsActions;
-(void)setServiceViewController:(id)arg1;
-(void)setIndexPathsForSelectedItems:(id)arg1;
-(void)setSortView:(id)arg1;
-(void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
-(void)scrollSortViewToVisible;

@end

