/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/_SFSingleBookmarkNavigationControllerDelegate.h>

@class SingleBookmarkNavigationController, TabDocument;

@interface BookmarkLongPressAlertController : UIAlertController <_SFSingleBookmarkNavigationControllerDelegate> {

	SingleBookmarkNavigationController* _bookmarkNavController;
	TabDocument* _tabDocument;

}
+(void)_addActionForAddBookmarkButtonToAlertController:(id)arg1 ;
+(void)_addActionForAddToReadingListButtonToAlertController:(id)arg1 ;
+(void)_addActionForAddToSharedLinksButtonToAlertController:(id)arg1 ;
+(void)_addActionForCancelButtonToAlertController:(id)arg1 ;
+(id)alertControllerWithTabDocument:(id)arg1 ;
+(BOOL)isAlertControllerAvailableForTabDocument:(id)arg1 ;
-(void)_addBookmark;
-(void)_subscribeInSharedLinks;
-(void)_addToReadingList;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
@end

