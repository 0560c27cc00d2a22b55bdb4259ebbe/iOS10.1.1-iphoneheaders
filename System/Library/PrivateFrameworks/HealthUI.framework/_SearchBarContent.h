/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIStackView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol HKIncrementalSearchBarDelegate;
@class HKIncrementalSearchBar, HKBarButtonItemControl, _SearchEntryWithMatchDisplay, NSString;

@interface _SearchBarContent : UIStackView <UISearchBarDelegate> {

	id<HKIncrementalSearchBarDelegate> _searchBarDelegate;
	HKIncrementalSearchBar* _searchBar;
	HKBarButtonItemControl* _upBarButton;
	HKBarButtonItemControl* _downBarButton;
	HKBarButtonItemControl* _doneBarButton;
	_SearchEntryWithMatchDisplay* _searchEntry;

}

@property (assign,nonatomic,__weak) id<HKIncrementalSearchBarDelegate> searchBarDelegate;              //@synthesize searchBarDelegate=_searchBarDelegate - In the implementation block
@property (nonatomic,__weak,readonly) HKIncrementalSearchBar * searchBar;                              //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * upBarButton;                                   //@synthesize upBarButton=_upBarButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * downBarButton;                                 //@synthesize downBarButton=_downBarButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * doneBarButton;                                 //@synthesize doneBarButton=_doneBarButton - In the implementation block
@property (nonatomic,readonly) _SearchEntryWithMatchDisplay * searchEntry;                             //@synthesize searchEntry=_searchEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKIncrementalSearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id<HKIncrementalSearchBarDelegate>)searchBarDelegate;
-(void)setSearchBarDelegate:(id<HKIncrementalSearchBarDelegate>)arg1 ;
-(id)inputField;
-(id)initWithSearchBar:(id)arg1 ;
-(_SearchEntryWithMatchDisplay *)searchEntry;
-(HKBarButtonItemControl *)upBarButton;
-(HKBarButtonItemControl *)downBarButton;
-(void)buildSearchBarContent;
-(void)upAction:(id)arg1 ;
-(void)downAction:(id)arg1 ;
-(HKBarButtonItemControl *)doneBarButton;
@end

