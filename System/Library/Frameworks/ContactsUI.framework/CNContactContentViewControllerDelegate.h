/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
-(id)contactPresentedViewController:(id)arg1;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;

@end

