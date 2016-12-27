/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) Class valueClass; 
-(NSString *)key;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(int)abPropertyID;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(BOOL)isConvertibleABValue:(void*)arg1 ;
-(void*)ABValueForABSource:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
-(BOOL)isWritable;
-(Class)valueClass;
@end

