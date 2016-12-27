/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKit/UICollectionViewTableCell.h>

@class UILabel, UIImageView, UIProgressView, _UIDocumentPickerDocumentCollectionViewController, _UIDocumentPickerContainerItem, NSLayoutConstraint, NSArray, UIView, UILongPressGestureRecognizer;

@interface _UIDocumentPickerCell : UICollectionViewTableCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _subtitle2Label;
	UILabel* _subtitleJoiner;
	UIImageView* _tagView;
	UIImageView* _thumbnailView;
	UIProgressView* _progressView;
	long long _cellStyle;
	_UIDocumentPickerDocumentCollectionViewController* _collectionView;
	_UIDocumentPickerContainerItem* _item;
	NSLayoutConstraint* _thumbnailCenterWidthConstraint;
	NSLayoutConstraint* _thumbnailCenterHeightConstraint;
	NSArray* _gridConstraints;
	NSArray* _tableConstraints;
	NSArray* _indentedConstraints;
	UIView* _indentationHelperView;
	NSLayoutConstraint* _indentationConstraint;
	UIImageView* _selectionView;
	UILongPressGestureRecognizer* _pickableDiagnosticGestureRecognizer;
	UILongPressGestureRecognizer* _actionGestureRecognizer;

}

@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterWidthConstraint;                                    //@synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterHeightConstraint;                                   //@synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * gridConstraints;                                                              //@synthesize gridConstraints=_gridConstraints - In the implementation block
@property (nonatomic,retain) NSArray * tableConstraints;                                                             //@synthesize tableConstraints=_tableConstraints - In the implementation block
@property (nonatomic,retain) NSArray * indentedConstraints;                                                          //@synthesize indentedConstraints=_indentedConstraints - In the implementation block
@property (nonatomic,retain) UIView * indentationHelperView;                                                         //@synthesize indentationHelperView=_indentationHelperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * indentationConstraint;                                             //@synthesize indentationConstraint=_indentationConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * selectionView;                                                            //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * pickableDiagnosticGestureRecognizer;                     //@synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * actionGestureRecognizer;                                 //@synthesize actionGestureRecognizer=_actionGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitle2Label;                                                               //@synthesize subtitle2Label=_subtitle2Label - In the implementation block
@property (nonatomic,retain) UILabel * subtitleJoiner;                                                               //@synthesize subtitleJoiner=_subtitleJoiner - In the implementation block
@property (nonatomic,retain) UIImageView * tagView;                                                                  //@synthesize tagView=_tagView - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                                                            //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                          //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) long long cellStyle;                                                                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerDocumentCollectionViewController * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerItem * item;                                                  //@synthesize item=_item - In the implementation block
+(id)_titleFontForTable:(BOOL)arg1 ;
+(id)_subtitleFontForTable:(BOOL)arg1 ;
+(CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2 ;
+(CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2 ;
-(UILabel *)subtitle2Label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(_UIDocumentPickerContainerItem *)item;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(_UIDocumentPickerDocumentCollectionViewController *)collectionView;
-(UIImageView *)selectionView;
-(void)setItem:(_UIDocumentPickerContainerItem *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_updateSeparatorInset;
-(void)setCollectionView:(_UIDocumentPickerDocumentCollectionViewController *)arg1 ;
-(void)setSelectionView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_deleteAction:(id)arg1 ;
-(void)_updateFonts;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)setSubtitle2Label:(UILabel *)arg1 ;
-(UIImageView *)thumbnailView;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(long long)cellStyle;
-(void)setCellStyle:(long long)arg1 ;
-(void)_showPickableDiagnostic;
-(void)setPickableDiagnosticGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)pickableDiagnosticGestureRecognizer;
-(void)setSubtitleJoiner:(UILabel *)arg1 ;
-(UILabel *)subtitleJoiner;
-(void)setIndentationHelperView:(UIView *)arg1 ;
-(void)setTagView:(UIImageView *)arg1 ;
-(UIImageView *)tagView;
-(UIView *)indentationHelperView;
-(void)_dynamicTypeSizeChanged:(id)arg1 ;
-(void)_updateIconSize;
-(NSArray *)gridConstraints;
-(NSArray *)tableConstraints;
-(NSArray *)indentedConstraints;
-(void)setGridConstraints:(NSArray *)arg1 ;
-(void)setTableConstraints:(NSArray *)arg1 ;
-(void)setIndentedConstraints:(NSArray *)arg1 ;
-(void)_updateConstraintsForCellStyle;
-(NSLayoutConstraint *)thumbnailCenterHeightConstraint;
-(NSLayoutConstraint *)thumbnailCenterWidthConstraint;
-(void)_updateSelectionState:(BOOL)arg1 ;
-(void)_updateAccessoryType;
-(void)updateForEditingState;
-(void)setIndentationConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)indentationConstraint;
-(void)setThumbnailCenterHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setThumbnailCenterWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateActionGestureRecognizer;
-(void)_udpateLabelAlpha;
-(void)reloadItem:(BOOL)arg1 ;
-(void)_renameAction:(id)arg1 ;
-(void)_activityAction:(id)arg1 ;
-(void)_moveAction:(id)arg1 ;
-(void)_infoAction:(id)arg1 ;
-(void)_moreAction:(id)arg1 ;
-(UILongPressGestureRecognizer *)actionGestureRecognizer;
-(void)setActionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_showActions:(id)arg1 ;
-(id)availableActions;
@end

