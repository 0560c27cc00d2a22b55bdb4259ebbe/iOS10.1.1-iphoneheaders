/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSimpleDataEntryCellDelegate.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemType.h>

@protocol HKSimpleDataEntryItemDelegate;
@class HKSimpleDataEntryPlainTextCell, NSString;

@interface HKSimpleDataEntryPlainTextItem : NSObject <HKSimpleDataEntryCellDelegate, HKSimpleDataEntryItemType> {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	NSString* _text;
	long long _intention;
	id<HKSimpleDataEntryItemDelegate> _delegate;
	unsigned long long _placeholderType;

}

@property (assign,nonatomic,__weak) id<HKSimpleDataEntryItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderType;                             //@synthesize placeholderType=_placeholderType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HKSimpleDataEntryItemDelegate>)arg1 ;
-(id<HKSimpleDataEntryItemDelegate>)delegate;
-(void)beginEditing;
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(unsigned long long)placeholderType;
-(void)doneButtonTapped:(id)arg1 ;
-(void)updateCellDisplay;
-(id)formattedKeyAndValue;
-(void)setPlaceholderType:(unsigned long long)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 forCell:(id)arg2 ;
-(void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 forCell:(id)arg2 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 defaultText:(id)arg3 intention:(long long)arg4 ;
@end

