//
//  ShareSearchUserViewController.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 28/9/15.
//
//

/*
 Copyright (C) 2015, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"


@interface ShareSearchUserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MBProgressHUDDelegate, UISearchDisplayDelegate>

@property (weak, nonatomic) IBOutlet UITableView* searchTableView;
@property(nonatomic,strong) IBOutlet UISearchBar *itemSearchBar;

@end