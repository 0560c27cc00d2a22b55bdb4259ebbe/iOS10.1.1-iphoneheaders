/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell {

	NSArray* _previousValue;

}

@property (nonatomic,retain) NSArray * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN6)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(NSArray *)previousValue;
-(void)setPreviousValue:(NSArray *)arg1 ;
@end

