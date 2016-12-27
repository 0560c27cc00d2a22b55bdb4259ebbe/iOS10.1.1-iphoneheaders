/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAlertController.h>
#import <libobjc.A.dylib/CKPhotoPickerCollectionViewDelegate.h>

@protocol CKPhotoPickerControllerDelegate;
@class CKPhotoPickerCollectionViewController, UIAlertAction, NSString;

@interface CKPhotoPickerController : CKAlertController <CKPhotoPickerCollectionViewDelegate> {

	id<CKPhotoPickerControllerDelegate> _delegate;
	CKPhotoPickerCollectionViewController* _photosCollectionView;
	UIAlertAction* _topAlertAction;
	UIAlertAction* _bottomAlertAction;
	NSString* _captureLabelText;

}

@property (nonatomic,retain) CKPhotoPickerCollectionViewController * photosCollectionView;              //@synthesize photosCollectionView=_photosCollectionView - In the implementation block
@property (nonatomic,retain) UIAlertAction * topAlertAction;                                            //@synthesize topAlertAction=_topAlertAction - In the implementation block
@property (nonatomic,retain) UIAlertAction * bottomAlertAction;                                         //@synthesize bottomAlertAction=_bottomAlertAction - In the implementation block
@property (nonatomic,retain) NSString * captureLabelText;                                               //@synthesize captureLabelText=_captureLabelText - In the implementation block
@property (assign,nonatomic,__weak) id<CKPhotoPickerControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKPhotoPickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKPhotoPickerControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)allowsRotation;
-(BOOL)_shouldAlignToKeyboard;
-(void)_cancelButtonPressed;
-(void)_topAlertActionHandler;
-(void)setTopAlertAction:(UIAlertAction *)arg1 ;
-(void)_bottomAlertActionHandler;
-(void)setBottomAlertAction:(UIAlertAction *)arg1 ;
-(void)setPhotosCollectionView:(CKPhotoPickerCollectionViewController *)arg1 ;
-(void)setCaptureLabelText:(NSString *)arg1 ;
-(void)_updateAlertTitles;
-(CKPhotoPickerCollectionViewController *)photosCollectionView;
-(UIAlertAction *)topAlertAction;
-(UIAlertAction *)bottomAlertAction;
-(NSString *)captureLabelText;
-(void)photoPickerCollectionViewAssetSelectionDidChange:(id)arg1 ;
@end

