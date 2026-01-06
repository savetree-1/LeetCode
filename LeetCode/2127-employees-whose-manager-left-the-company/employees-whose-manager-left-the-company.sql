SELECT E.employee_id
FROM Employees E
WHERE E.salary < 30000
  AND E.manager_id IS NOT NULL
  AND NOT EXISTS (
      SELECT 1
      FROM Employees D
      WHERE D.employee_id = E.manager_id
  )
ORDER BY E.employee_id;
