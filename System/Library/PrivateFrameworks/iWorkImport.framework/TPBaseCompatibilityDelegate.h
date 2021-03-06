/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKCompatibilityDelegate.h>

@class NSString;

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nestedDocumentFilename;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2 ;
-(BOOL)isSageDocumentType:(id)arg1 ;
-(Class)importerClassForType:(id)arg1 ;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1 ;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(BOOL)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2 ;
-(id)backwardsCompatibleTypeForType:(id)arg1 ;
-(id)unsupportedExportMessageStringForType:(id)arg1 ;
-(id)newExportableDocumentTypesForFlag:(unsigned long long)arg1 ;
-(id)epubExportCategories;
-(id)epubExportLanguageCodes;
@end

