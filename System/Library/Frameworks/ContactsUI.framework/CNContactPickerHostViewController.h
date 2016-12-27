/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentViewController.h>
#import <libobjc.A.dylib/CNContactPickerHostProtocol.h>

@protocol CNContactPickerContentDelegate, NSCopying;
@class UINavigationController, NSExtension, NSString;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {

	void* _addressBook;
	id<CNContactPickerContentDelegate> _delegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                          //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                         //@synthesize extension=_extension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
+(BOOL)getViewController:(/*^block*/id)arg1 ;
+(id)contextForIdentifier:(id)arg1 ;
+(id)contactPickerExtension;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(void)dealloc;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)invalidate;
-(UINavigationController *)navigationController;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end

