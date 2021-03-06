/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPersonTableViewDataSourceDelegate <NSObject>
@property (assign,nonatomic) id<ABPersonEditDelegate> editDelegate; 
@required
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
-(void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
-(BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
-(void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
-(BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
-(void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
-(void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
-(BOOL)personTableViewDataSourceIsLocation:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
-(void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2;
-(void)personTableViewDataSourceDidReloadData:(id)arg1;
-(void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(BOOL)arg2;
-(BOOL)personTableViewDataSourceShouldShowHeader:(id)arg1;
-(double)personTableViewDataSourceHeaderPadding:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(BOOL)arg3;
-(void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(BOOL)arg2;
-(void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
-(BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
-(void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
-(void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
-(BOOL)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
-(BOOL)personTableViewDataSourceIsInPopover:(id)arg1;
-(void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
-(void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
-(BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
-(void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
-(BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
-(void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
-(void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
-(void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
-(BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1;
-(id<ABPersonEditDelegate>)editDelegate;
-(void)setEditDelegate:(id)arg1;

@end

