/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PTSRowObserver.h>

@class NSIndexPath, PTSChoiceRow, NSString;

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTSChoiceRow* _row;

}

@property (nonatomic,retain) PTSChoiceRow * row;                    //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PTSChoiceRow *)row;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)_indexPathForValue:(id)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
-(void)row:(id)arg1 didChangeValue:(id)arg2 ;
-(void)setRow:(PTSChoiceRow *)arg1 ;
@end

