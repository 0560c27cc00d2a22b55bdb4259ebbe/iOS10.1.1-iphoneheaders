/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICCameraFolder.h>

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {

	void* _ptpCameraFolderProperties;
	NSString* _path;

}

@property (copy) id info; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned storageID; 
@property (readonly) unsigned objHandle; 
@property (retain) NSString * path;                        //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(unsigned)objHandle;
-(void)enumerateContent;
-(BOOL)deleteItemFromCamera:(id)arg1 ;
-(id)itemForObjectHandle:(unsigned)arg1 ;
-(id)folderForObjectHandle:(unsigned)arg1 ;
-(unsigned)storageID;
-(id)folderForObjectHandleCreatingIfNeeded:(unsigned)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int*)arg3 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned)arg5 objectHandle:(unsigned)arg6 ;
-(BOOL)hasDCIMParent;
-(void)refreshInfo;
-(void)finalize;
@end

