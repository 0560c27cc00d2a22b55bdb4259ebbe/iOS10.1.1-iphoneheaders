/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CydiaDelegate
@required
-(void)releaseNetworkActivityIndicator;
-(void)retainNetworkActivityIndicator;
-(void)reloadDataWithInvocation:(id)arg1;
-(char)addTrivialSource:(id)arg1;
-(void)installPackages:(id)arg1;
-(void)_saveConfig;
-(void)returnToCydia;
-(id)addProgressHUD;
-(void)installPackage:(id)arg1;
-(void)clearPackage:(id)arg1;
-(void)removePackage:(id)arg1;
-(void)showActionSheet:(id)arg1 fromItem:(id)arg2;
-(void)removeProgressHUD:(id)arg1;
-(void)updateData;
-(void)distUpgrade;
-(void)loadData;
-(void)addSource:(id)arg1;
-(BOOL)requestUpdate;
-(void)saveState;
-(void)syncData;
-(char)updating;
-(void)beginUpdate;

@end

