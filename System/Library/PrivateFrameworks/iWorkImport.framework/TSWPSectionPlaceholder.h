/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSWPSection.h>
#import <iWorkImport/TSKModel.h>

@class TSWPStorage, NSString;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection, TSKModel> {

	TSWPStorage* _parentStorage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)needsObjectUUID;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)parentStorage;
-(void)setParentStorage:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
-(id)pageMasterOwningModel:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

