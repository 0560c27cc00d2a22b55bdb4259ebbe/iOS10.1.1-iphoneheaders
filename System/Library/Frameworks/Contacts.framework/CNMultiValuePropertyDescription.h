/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPropertyDescription.h>

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (nonatomic,readonly) Class valueClass; 
@property (nonatomic,readonly) BOOL isSingleValue; 
@property (nonatomic,readonly) BOOL isMultiValue; 
@property (nonatomic,readonly) NSArray * standardLabels; 
@property (nonatomic,readonly) Class labeledValueClass; 
@property (nonatomic,readonly) id plistTransform; 
@property (nonatomic,readonly) id fromPlistTransform; 
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(id)fromPlistTransform;
-(NSArray *)standardLabels;
-(id)stringForIndexingForContact:(id)arg1 ;
-(Class)labeledValueClass;
-(id)plistTransform;
-(BOOL)isValidMultiValueValue:(id)arg1 error:(id*)arg2 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(void*)ABMutableMultiValueForABPerson:(void*)arg1 ;
-(BOOL)isSingleValue;
-(unsigned)abPropertyType;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(id)CNLabeledValueLabelFromABMultiValueLabel:(CFStringRef)arg1 ;
-(CFStringRef)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2 ;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(BOOL)isMultiValue;
-(Class)valueClass;
@end

