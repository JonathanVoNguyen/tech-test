function check() {
    var title = document.getElementById('title').value;
    var location = document.getElementById('location').value;
    var department = document.getElementById('department').value;

    if(title.length == 0){
    	errorTitle.innerHTML = "Position Title is required.";
    } else {
    	errorTitle.innerHTML = "";
    }

    if(location.length == 0){
    	errorLocation.innerHTML = "Position Location is required.";
    } else {
    	errorLocation.innerHTML = "";
    }

    if(department.length == 0){
    	errorDepartment.innerHTML = "Position Department is required.";
    } else {
    	errorDepartment.innerHTML = "";
    }

}
